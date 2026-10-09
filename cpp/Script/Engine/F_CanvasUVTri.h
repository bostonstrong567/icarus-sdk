// /Script/Engine.CanvasUVTri
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FCanvasUVTri
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V0_Pos;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V0_UV;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor V0_Color;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V1_Pos;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V1_UV;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor V1_Color;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V2_Pos;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D V2_UV;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor V2_Color;  // 0x0050, size 0x10
};
