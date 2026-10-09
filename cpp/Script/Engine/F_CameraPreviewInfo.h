// /Script/Engine.CameraPreviewInfo
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupCamera.h

USTRUCT()
struct FCameraPreviewInfo
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<APawn> PawnClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) UAnimSequence* AnimSeq;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FVector Location;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x001C, size 0xC
    UPROPERTY(Transient) APawn* PawnInst;  // 0x0028, size 0x8
};
