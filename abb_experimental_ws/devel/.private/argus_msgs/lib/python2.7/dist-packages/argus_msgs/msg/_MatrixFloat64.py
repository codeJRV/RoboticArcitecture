# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from argus_msgs/MatrixFloat64.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MatrixFloat64(genpy.Message):
  _md5sum = "d49ad88054ad35f5431113eea16faa1f"
  _type = "argus_msgs/MatrixFloat64"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Double-precision dynamic-sized matrix message type
bool column_major
uint32 rows
uint32 cols
float64[] data"""
  __slots__ = ['column_major','rows','cols','data']
  _slot_types = ['bool','uint32','uint32','float64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       column_major,rows,cols,data

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MatrixFloat64, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.column_major is None:
        self.column_major = False
      if self.rows is None:
        self.rows = 0
      if self.cols is None:
        self.cols = 0
      if self.data is None:
        self.data = []
    else:
      self.column_major = False
      self.rows = 0
      self.cols = 0
      self.data = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_B2I().pack(_x.column_major, _x.rows, _x.cols))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.pack(pattern, *self.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.column_major, _x.rows, _x.cols,) = _get_struct_B2I().unpack(str[start:end])
      self.column_major = bool(self.column_major)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.data = struct.unpack(pattern, str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_B2I().pack(_x.column_major, _x.rows, _x.cols))
      length = len(self.data)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.data.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.column_major, _x.rows, _x.cols,) = _get_struct_B2I().unpack(str[start:end])
      self.column_major = bool(self.column_major)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      end += struct.calcsize(pattern)
      self.data = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B2I = None
def _get_struct_B2I():
    global _struct_B2I
    if _struct_B2I is None:
        _struct_B2I = struct.Struct("<B2I")
    return _struct_B2I