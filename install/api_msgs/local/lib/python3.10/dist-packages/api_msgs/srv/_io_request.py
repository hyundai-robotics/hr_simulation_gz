# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/IoRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IoRequest_Request(type):
    """Metaclass of message 'IoRequest_Request'."""

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
                'api_msgs.srv.IoRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__io_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__io_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__io_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__io_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__io_request__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IoRequest_Request(metaclass=Metaclass_IoRequest_Request):
    """Message class 'IoRequest_Request'."""

    __slots__ = [
        '_type',
        '_blk_no',
        '_sig_no',
        '_val',
    ]

    _fields_and_field_types = {
        'type': 'string',
        'blk_no': 'int32',
        'sig_no': 'int32',
        'val': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', str())
        self.blk_no = kwargs.get('blk_no', int())
        self.sig_no = kwargs.get('sig_no', int())
        self.val = kwargs.get('val', int())

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
        if self.type != other.type:
            return False
        if self.blk_no != other.blk_no:
            return False
        if self.sig_no != other.sig_no:
            return False
        if self.val != other.val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def blk_no(self):
        """Message field 'blk_no'."""
        return self._blk_no

    @blk_no.setter
    def blk_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blk_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'blk_no' field must be an integer in [-2147483648, 2147483647]"
        self._blk_no = value

    @builtins.property
    def sig_no(self):
        """Message field 'sig_no'."""
        return self._sig_no

    @sig_no.setter
    def sig_no(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sig_no' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sig_no' field must be an integer in [-2147483648, 2147483647]"
        self._sig_no = value

    @builtins.property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'val' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'val' field must be an integer in [-2147483648, 2147483647]"
        self._val = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_IoRequest_Response(type):
    """Metaclass of message 'IoRequest_Response'."""

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
                'api_msgs.srv.IoRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__io_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__io_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__io_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__io_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__io_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IoRequest_Response(metaclass=Metaclass_IoRequest_Response):
    """Message class 'IoRequest_Response'."""

    __slots__ = [
        '_message',
        '_val',
        '_success',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'val': 'int32',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.val = kwargs.get('val', int())
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
        if self.val != other.val:
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
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'val' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'val' field must be an integer in [-2147483648, 2147483647]"
        self._val = value

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


class Metaclass_IoRequest(type):
    """Metaclass of service 'IoRequest'."""

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
                'api_msgs.srv.IoRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__io_request

            from api_msgs.srv import _io_request
            if _io_request.Metaclass_IoRequest_Request._TYPE_SUPPORT is None:
                _io_request.Metaclass_IoRequest_Request.__import_type_support__()
            if _io_request.Metaclass_IoRequest_Response._TYPE_SUPPORT is None:
                _io_request.Metaclass_IoRequest_Response.__import_type_support__()


class IoRequest(metaclass=Metaclass_IoRequest):
    from api_msgs.srv._io_request import IoRequest_Request as Request
    from api_msgs.srv._io_request import IoRequest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
