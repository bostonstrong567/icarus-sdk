// /Script/Engine.SupportedSubTrackInfo
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrack.h

USTRUCT()
struct FSupportedSubTrackInfo
{
public:
    UPROPERTY() TSubclassOf<UInterpTrack> SupportedClass;  // 0x0000, size 0x8
    UPROPERTY() FString SubTrackName;  // 0x0008, size 0x10
    UPROPERTY() int32 GroupIndex;  // 0x0018, size 0x4
};
