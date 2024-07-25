# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/IoplcGet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IoplcGet_Request(type):
    """Metaclass of message 'IoplcGet_Request'."""

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
                'api_msgs.srv.IoplcGet_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ioplc_get__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ioplc_get__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ioplc_get__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ioplc_get__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ioplc_get__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IoplcGet_Request(metaclass=Metaclass_IoplcGet_Request):
    """Message class 'IoplcGet_Request'."""

    __slots__ = [
        '_obj_type',
        '_obj_idx',
        '_relay_type',
        '_st',
        '_len',
    ]

    _fields_and_field_types = {
        'obj_type': 'string',
        'obj_idx': 'int32',
        'relay_type': 'string',
        'st': 'int32',
        'len': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.obj_type = kwargs.get('obj_type', str())
        self.obj_idx = kwargs.get('obj_idx', int())
        self.relay_type = kwargs.get('relay_type', str())
        self.st = kwargs.get('st', int())
        self.len = kwargs.get('len', int())

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
        if self.obj_type != other.obj_type:
            return False
        if self.obj_idx != other.obj_idx:
            return False
        if self.relay_type != other.relay_type:
            return False
        if self.st != other.st:
            return False
        if self.len != other.len:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def obj_type(self):
        """Message field 'obj_type'."""
        return self._obj_type

    @obj_type.setter
    def obj_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'obj_type' field must be of type 'str'"
        self._obj_type = value

    @builtins.property
    def obj_idx(self):
        """Message field 'obj_idx'."""
        return self._obj_idx

    @obj_idx.setter
    def obj_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'obj_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'obj_idx' field must be an integer in [-2147483648, 2147483647]"
        self._obj_idx = value

    @builtins.property
    def relay_type(self):
        """Message field 'relay_type'."""
        return self._relay_type

    @relay_type.setter
    def relay_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'relay_type' field must be of type 'str'"
        self._relay_type = value

    @builtins.property
    def st(self):
        """Message field 'st'."""
        return self._st

    @st.setter
    def st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'st' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'st' field must be an integer in [-2147483648, 2147483647]"
        self._st = value

    @builtins.property  # noqa: A003
    def len(self):  # noqa: A003
        """Message field 'len'."""
        return self._len

    @len.setter  # noqa: A003
    def len(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'len' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'len' field must be an integer in [-2147483648, 2147483647]"
        self._len = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IoplcGet_Response(type):
    """Metaclass of message 'IoplcGet_Response'."""

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
                'api_msgs.srv.IoplcGet_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ioplc_get__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ioplc_get__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ioplc_get__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ioplc_get__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ioplc_get__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IoplcGet_Response(metaclass=Metaclass_IoplcGet_Response):
    """Message class 'IoplcGet_Response'."""

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


class Metaclass_IoplcGet(type):
    """Metaclass of service 'IoplcGet'."""

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
                'api_msgs.srv.IoplcGet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ioplc_get

            from api_msgs.srv import _ioplc_get
            if _ioplc_get.Metaclass_IoplcGet_Request._TYPE_SUPPORT is None:
                _ioplc_get.Metaclass_IoplcGet_Request.__import_type_support__()
            if _ioplc_get.Metaclass_IoplcGet_Response._TYPE_SUPPORT is None:
                _ioplc_get.Metaclass_IoplcGet_Response.__import_type_support__()


class IoplcGet(metaclass=Metaclass_IoplcGet):
    from api_msgs.srv._ioplc_get import IoplcGet_Request as Request
    from api_msgs.srv._ioplc_get import IoplcGet_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
