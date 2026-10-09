// /Game/UI/Components/F_Connections.F_Connections
// size 0x20

USTRUCT()
struct F_Connections
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Start;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D End;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Colour;  // 0x0010, size 0x10
};
