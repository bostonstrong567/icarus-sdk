// /Game/BP/Building/Roads/IcarusSplineMeshStruct.IcarusSplineMeshStruct
// size 0x30

USTRUCT()
struct IcarusSplineMeshStruct
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartPos;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartTan;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndPos;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector EndTan;  // 0x0024, size 0xC
};
