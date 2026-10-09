// /Script/Icarus.AudioOcclusionSocketTracePoint
// size 0x18, declared in Icarus/Source/Icarus/Audio/Occlusion/AudioOcclusionSocketTracePoint.h

USTRUCT()
struct FAudioOcclusionSocketTracePoint
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TraceName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetSocket;  // 0x0008, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0010, size 0x8
};
