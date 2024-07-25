# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/ProgramCnt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ProgramCnt_Request(type):
    """Metaclass of message 'ProgramCnt_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.ProgramCnt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__program_cnt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__program_cnt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__program_cnt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__program_cnt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__program_cnt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProgramCnt_Request(metaclass=Metaclass_ProgramCnt_Request):
    """Message class 'ProgramCnt_Request'."""

    __slots__ = [
        '_pno',
        '_sno',
        '_fno',
        '_ext_sel',
    ]

    _fields_and_field_types = {
        'pno': 'int32',
        'sno': 'int32',
        'fno': 'int32',
        'ext_sel': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pno = kwargs.get('pno', int())
        self.sno = kwargs.get('sno', int())
        self.fno = kwargs.get('fno', int())
        self.ext_sel = kwargs.get('ext_sel', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.pno != other.pno:
            return False
        if self.sno != other.sno:
            return False
        if self.fno != other.fno:
            return False
        if self.ext_sel != other.ext_sel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pno(self):
        """Message field 'pno'."""
        return self._pno

    @pno.setter
    def pno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pno' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'pno' field must be an integer in [-2147483648, 2147483647]"
        self._pno = value

    @builtins.property
    def sno(self):
        """Message field 'sno'."""
        return self._sno

    @sno.setter
    def sno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sno' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sno' field must be an integer in [-2147483648, 2147483647]"
        self._sno = value

    @builtins.property
    def fno(self):
        """Message field 'fno'."""
        return self._fno

    @fno.setter
    def fno(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fno' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fno' field must be an integer in [-2147483648, 2147483647]"
        self._fno = value

    @builtins.property
    def ext_sel(self):
        """Message field 'ext_sel'."""
        return self._ext_sel

    @ext_sel.setter
    def ext_sel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ext_sel' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ext_sel' field must be an integer in [-2147483648, 2147483647]"
        self._ext_sel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ProgramCnt_Response(type):
    """Metaclass of message 'ProgramCnt_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.ProgramCnt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__program_cnt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__program_cnt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__program_cnt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__program_cnt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__program_cnt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ProgramCnt_Response(metaclass=Metaclass_ProgramCnt_Response):
    """Message class 'ProgramCnt_Response'."""

    __slots__ = [
        '_message',
        '_success',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.message != other.message:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ProgramCnt(type):
    """Metaclass of service 'ProgramCnt'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.ProgramCnt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__program_cnt

            from api_msgs.srv import _program_cnt
            if _program_cnt.Metaclass_ProgramCnt_Request._TYPE_SUPPORT is None:
                _program_cnt.Metaclass_ProgramCnt_Request.__import_type_support__()
            if _program_cnt.Metaclass_ProgramCnt_Response._TYPE_SUPPORT is None:
                _program_cnt.Metaclass_ProgramCnt_Response.__import_type_support__()


class ProgramCnt(metaclass=Metaclass_ProgramCnt):
    from api_msgs.srv._program_cnt import ProgramCnt_Request as Request
    from api_msgs.srv._program_cnt import ProgramCnt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
