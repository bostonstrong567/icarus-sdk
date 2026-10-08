// /Script/Icarus.CameraPathSample
// size 0x50, declared in Icarus/Source/Icarus/CameraPath/CameraPathTypes.h

USTRUCT()
struct FCameraPathSample
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform RelativeTransform;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FOV;  // 0x0040, size 0x4
};
