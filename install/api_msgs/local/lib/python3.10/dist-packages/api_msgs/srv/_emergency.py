# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/Emergency.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Emergency_Request(type):
    """Metaclass of message 'Emergency_Request'."""

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
                'api_msgs.srv.Emergency_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Emergency_Request(metaclass=Metaclass_Emergency_Request):
    """Message class 'Emergency_Request'."""

    __slots__ = [
        '_step_no',
        '_stop_at',
        '_stop_at_corner',
        '_category',
    ]

    _fields_and_field_types = {
        'step_no': 'int32',
        'stop_at': 'int32',
        'stop_at_corner': 'int32',
        'category': 'int32',
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
        self.step_no = kwargs.get('step_no', int())
        self.stop_at = kwargs.get('stop_at', int())
        self.stop_at_corner = kwargs.get('stop_at_corner', int())
        self.category = kwargs.get('category', int())

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
        if self.step_no != other.step_no:
            return False
        if self.stop_at != other.stop_at:
            return False
        if self.stop_at_corner != other.stop_at_corner:
            return False
        if self.category != other.category:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def step_no(self):
        """Message field 'step_no'."""
        return self._step_no

    @step_no.setter
    def step_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step_no' field must be an integer in [-2147483648, 2147483647]"
        self._step_no = value

    @builtins.property
    def stop_at(self):
        """Message field 'stop_at'."""
        return self._stop_at

    @stop_at.setter
    def stop_at(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_at' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'stop_at' field must be an integer in [-2147483648, 2147483647]"
        self._stop_at = value

    @builtins.property
    def stop_at_corner(self):
        """Message field 'stop_at_corner'."""
        return self._stop_at_corner

    @stop_at_corner.setter
    def stop_at_corner(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_at_corner' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'stop_at_corner' field must be an integer in [-2147483648, 2147483647]"
        self._stop_at_corner = value

    @builtins.property
    def category(self):
        """Message field 'category'."""
        return self._category

    @category.setter
    def category(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'category' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'category' field must be an integer in [-2147483648, 2147483647]"
        self._category = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Emergency_Response(type):
    """Metaclass of message 'Emergency_Response'."""

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
                'api_msgs.srv.Emergency_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Emergency_Response(metaclass=Metaclass_Emergency_Response):
    """Message class 'Emergency_Response'."""

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


class Metaclass_Emergency(type):
    """Metaclass of service 'Emergency'."""

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
                'api_msgs.srv.Emergency')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__emergency

            from api_msgs.srv import _emergency
            if _emergency.Metaclass_Emergency_Request._TYPE_SUPPORT is None:
                _emergency.Metaclass_Emergency_Request.__import_type_support__()
            if _emergency.Metaclass_Emergency_Response._TYPE_SUPPORT is None:
                _emergency.Metaclass_Emergency_Response.__import_type_support__()


class Emergency(metaclass=Metaclass_Emergency):
    from api_msgs.srv._emergency import Emergency_Request as Request
    from api_msgs.srv._emergency import Emergency_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
