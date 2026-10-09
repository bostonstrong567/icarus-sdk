// /Script/Engine.CameraShakePattern
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

UCLASS(Abstract, EditInlineNew)
class UCameraShakePattern : public UObject
{

    // Virtual functions that start here:
    //   GetShakePatternInfoImpl, IsFinishedImpl, ScrubShakePatternImpl, StartShakePatternImpl
    //   StopShakePatternImpl, TeardownShakePatternImpl, UpdateShakePatternImpl
};
