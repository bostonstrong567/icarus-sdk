DELEGATE() void OnEventStopped();
DELEGATE() void OnTimelineBeat(int32 Bar, int32 Beat, int32 Position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower);  // parameters 0x18
DELEGATE() void OnTimelineMarker(FString Name, int32 Position);  // parameters 0x14
