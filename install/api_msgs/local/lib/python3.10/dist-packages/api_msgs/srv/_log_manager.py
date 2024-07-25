# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/LogManager.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LogManager_Request(type):
    """Metaclass of message 'LogManager_Request'."""

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
                'api_msgs.srv.LogManager_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__log_manager__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__log_manager__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__log_manager__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__log_manager__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__log_manager__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LogManager_Request(metaclass=Metaclass_LogManager_Request):
    """Message class 'LogManager_Request'."""

    __slots__ = [
        '_n_item',
        '_cat_p',
        '_id_min',
        '_id_max',
        '_ts_min',
        '_ts_max',
    ]

    _fields_and_field_types = {
        'n_item': 'int32',
        'cat_p': 'string',
        'id_min': 'int32',
        'id_max': 'int32',
        'ts_min': 'string',
        'ts_max': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.n_item = kwargs.get('n_item', int())
        self.cat_p = kwargs.get('cat_p', str())
        self.id_min = kwargs.get('id_min', int())
        self.id_max = kwargs.get('id_max', int())
        self.ts_min = kwargs.get('ts_min', str())
        self.ts_max = kwargs.get('ts_max', str())

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
        if self.n_item != other.n_item:
            return False
        if self.cat_p != other.cat_p:
            return False
        if self.id_min != other.id_min:
            return False
        if self.id_max != other.id_max:
            return False
        if self.ts_min != other.ts_min:
            return False
        if self.ts_max != other.ts_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def n_item(self):
        """Message field 'n_item'."""
        return self._n_item

    @n_item.setter
    def n_item(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'n_item' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'n_item' field must be an integer in [-2147483648, 2147483647]"
        self._n_item = value

    @builtins.property
    def cat_p(self):
        """Message field 'cat_p'."""
        return self._cat_p

    @cat_p.setter
    def cat_p(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cat_p' field must be of type 'str'"
        self._cat_p = value

    @builtins.property
    def id_min(self):
        """Message field 'id_min'."""
        return self._id_min

    @id_min.setter
    def id_min(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_min' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id_min' field must be an integer in [-2147483648, 2147483647]"
        self._id_min = value

    @builtins.property
    def id_max(self):
        """Message field 'id_max'."""
        return self._id_max

    @id_max.setter
    def id_max(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id_max' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id_max' field must be an integer in [-2147483648, 2147483647]"
        self._id_max = value

    @builtins.property
    def ts_min(self):
        """Message field 'ts_min'."""
        return self._ts_min

    @ts_min.setter
    def ts_min(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ts_min' field must be of type 'str'"
        self._ts_min = value

    @builtins.property
    def ts_max(self):
        """Message field 'ts_max'."""
        return self._ts_max

    @ts_max.setter
    def ts_max(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ts_max' field must be of type 'str'"
        self._ts_max = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LogManager_Response(type):
    """Metaclass of message 'LogManager_Response'."""

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
                'api_msgs.srv.LogManager_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__log_manager__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__log_manager__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__log_manager__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__log_manager__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__log_manager__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LogManager_Response(metaclass=Metaclass_LogManager_Response):
    """Message class 'LogManager_Response'."""

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


class Metaclass_LogManager(type):
    """Metaclass of service 'LogManager'."""

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
                'api_msgs.srv.LogManager')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__log_manager

            from api_msgs.srv import _log_manager
            if _log_manager.Metaclass_LogManager_Request._TYPE_SUPPORT is None:
                _log_manager.Metaclass_LogManager_Request.__import_type_support__()
            if _log_manager.Metaclass_LogManager_Response._TYPE_SUPPORT is None:
                _log_manager.Metaclass_LogManager_Response.__import_type_support__()


class LogManager(metaclass=Metaclass_LogManager):
    from api_msgs.srv._log_manager import LogManager_Request as Request
    from api_msgs.srv._log_manager import LogManager_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
