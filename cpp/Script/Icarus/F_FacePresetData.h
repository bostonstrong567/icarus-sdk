// /Script/Icarus.FacePresetData
// size 0x38, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FacePresetsLibrary.generated.h

USTRUCT()
struct FFacePresetData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFaceTypes TopFaceShape;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TopFaceBlendValue;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFaceTypes BottomFaceShape;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BottomFaceBlendValue;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFaceTypes LeftFaceShape;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LeftFaceBlendValue;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFaceTypes RightFaceShape;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RightFaceBlendValue;  // 0x0034, size 0x4
};
