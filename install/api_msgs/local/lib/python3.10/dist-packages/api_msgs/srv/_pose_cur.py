# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/PoseCur.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PoseCur_Request(type):
    """Metaclass of message 'PoseCur_Request'."""

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
                'api_msgs.srv.PoseCur_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_cur__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_cur__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_cur__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_cur__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_cur__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseCur_Request(metaclass=Metaclass_PoseCur_Request):
    """Message class 'PoseCur_Request'."""

    __slots__ = [
        '_task_no',
        '_crd',
        '_ucrd_no',
        '_mechinfo',
    ]

    _fields_and_field_types = {
        'task_no': 'int32',
        'crd': 'int32',
        'ucrd_no': 'int32',
        'mechinfo': 'int32',
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
        self.task_no = kwargs.get('task_no', int())
        self.crd = kwargs.get('crd', int())
        self.ucrd_no = kwargs.get('ucrd_no', int())
        self.mechinfo = kwargs.get('mechinfo', int())

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
        if self.task_no != other.task_no:
            return False
        if self.crd != other.crd:
            return False
        if self.ucrd_no != other.ucrd_no:
            return False
        if self.mechinfo != other.mechinfo:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task_no(self):
        """Message field 'task_no'."""
        return self._task_no

    @task_no.setter
    def task_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_no' field must be an integer in [-2147483648, 2147483647]"
        self._task_no = value

    @builtins.property
    def crd(self):
        """Message field 'crd'."""
        return self._crd

    @crd.setter
    def crd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'crd' field must be an integer in [-2147483648, 2147483647]"
        self._crd = value

    @builtins.property
    def ucrd_no(self):
        """Message field 'ucrd_no'."""
        return self._ucrd_no

    @ucrd_no.setter
    def ucrd_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ucrd_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ucrd_no' field must be an integer in [-2147483648, 2147483647]"
        self._ucrd_no = value

    @builtins.property
    def mechinfo(self):
        """Message field 'mechinfo'."""
        return self._mechinfo

    @mechinfo.setter
    def mechinfo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mechinfo' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mechinfo' field must be an integer in [-2147483648, 2147483647]"
        self._mechinfo = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PoseCur_Response(type):
    """Metaclass of message 'PoseCur_Response'."""

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
                'api_msgs.srv.PoseCur_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__pose_cur__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__pose_cur__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__pose_cur__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__pose_cur__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__pose_cur__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PoseCur_Response(metaclass=Metaclass_PoseCur_Response):
    """Message class 'PoseCur_Response'."""

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


class Metaclass_PoseCur(type):
    """Metaclass of service 'PoseCur'."""

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
                'api_msgs.srv.PoseCur')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__pose_cur

            from api_msgs.srv import _pose_cur
            if _pose_cur.Metaclass_PoseCur_Request._TYPE_SUPPORT is None:
                _pose_cur.Metaclass_PoseCur_Request.__import_type_support__()
            if _pose_cur.Metaclass_PoseCur_Response._TYPE_SUPPORT is None:
                _pose_cur.Metaclass_PoseCur_Response.__import_type_support__()


class PoseCur(metaclass=Metaclass_PoseCur):
    from api_msgs.srv._pose_cur import PoseCur_Request as Request
    from api_msgs.srv._pose_cur import PoseCur_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
