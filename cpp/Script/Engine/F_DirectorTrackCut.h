// /Script/Engine.DirectorTrackCut
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackDirector.h

USTRUCT()
struct FDirectorTrackCut
{
public:
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY() float TransitionTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FName TargetCamGroup;  // 0x0008, size 0x8
    UPROPERTY() int32 ShotNumber;  // 0x0010, size 0x4
};
