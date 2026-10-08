DELEGATE() void NumTablesChanged();
DELEGATE() void OnControllerCaptureBeginEvent();
DELEGATE() void OnControllerCaptureBeginEventSynth2D();
DELEGATE() void OnControllerCaptureEndEvent();
DELEGATE() void OnControllerCaptureEndEventSynth2D();
DELEGATE() void OnEnvelopeFollowerUpdate(float EnvelopeValue);  // parameters 0x4
DELEGATE() void OnFloatValueChangedEvent(float Value);  // parameters 0x4
DELEGATE() void OnFloatValueChangedEventSynth2D(float Value);  // parameters 0x4
DELEGATE() void OnMouseCaptureBeginEvent();
DELEGATE() void OnMouseCaptureBeginEventSynth2D();
DELEGATE() void OnMouseCaptureEndEvent();
DELEGATE() void OnMouseCaptureEndEventSynth2D();
DELEGATE() void OnSampleLoaded();
DELEGATE() void OnSamplePlaybackProgress(float ProgressPercent, float ProgressTimeSeconds);  // parameters 0x8
DELEGATE() void OnTableAltered(int32 TableIndex);  // parameters 0x4
