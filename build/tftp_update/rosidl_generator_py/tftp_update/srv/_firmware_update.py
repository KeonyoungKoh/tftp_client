# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tftp_update:srv/FirmwareUpdate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FirmwareUpdate_Request(type):
    """Metaclass of message 'FirmwareUpdate_Request'."""

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
            module = import_type_support('tftp_update')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tftp_update.srv.FirmwareUpdate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__firmware_update__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__firmware_update__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__firmware_update__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__firmware_update__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__firmware_update__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FirmwareUpdate_Request(metaclass=Metaclass_FirmwareUpdate_Request):
    """Message class 'FirmwareUpdate_Request'."""

    __slots__ = [
        '_will_update',
        '_host',
        '_filename',
    ]

    _fields_and_field_types = {
        'will_update': 'int64',
        'host': 'string',
        'filename': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.will_update = kwargs.get('will_update', int())
        self.host = kwargs.get('host', str())
        self.filename = kwargs.get('filename', str())

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
        if self.will_update != other.will_update:
            return False
        if self.host != other.host:
            return False
        if self.filename != other.filename:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def will_update(self):
        """Message field 'will_update'."""
        return self._will_update

    @will_update.setter
    def will_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'will_update' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'will_update' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._will_update = value

    @property
    def host(self):
        """Message field 'host'."""
        return self._host

    @host.setter
    def host(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'host' field must be of type 'str'"
        self._host = value

    @property
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filename' field must be of type 'str'"
        self._filename = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FirmwareUpdate_Response(type):
    """Metaclass of message 'FirmwareUpdate_Response'."""

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
            module = import_type_support('tftp_update')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tftp_update.srv.FirmwareUpdate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__firmware_update__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__firmware_update__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__firmware_update__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__firmware_update__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__firmware_update__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FirmwareUpdate_Response(metaclass=Metaclass_FirmwareUpdate_Response):
    """Message class 'FirmwareUpdate_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', int())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'success' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'success' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._success = value


class Metaclass_FirmwareUpdate(type):
    """Metaclass of service 'FirmwareUpdate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tftp_update')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tftp_update.srv.FirmwareUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__firmware_update

            from tftp_update.srv import _firmware_update
            if _firmware_update.Metaclass_FirmwareUpdate_Request._TYPE_SUPPORT is None:
                _firmware_update.Metaclass_FirmwareUpdate_Request.__import_type_support__()
            if _firmware_update.Metaclass_FirmwareUpdate_Response._TYPE_SUPPORT is None:
                _firmware_update.Metaclass_FirmwareUpdate_Response.__import_type_support__()


class FirmwareUpdate(metaclass=Metaclass_FirmwareUpdate):
    from tftp_update.srv._firmware_update import FirmwareUpdate_Request as Request
    from tftp_update.srv._firmware_update import FirmwareUpdate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
