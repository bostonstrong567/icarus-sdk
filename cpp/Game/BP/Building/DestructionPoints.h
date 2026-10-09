// /Game/BP/Building/DestructionPoints.DestructionPoints
// size 0x18

USTRUCT()
struct DestructionPoints
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldLocation;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Impulse;  // 0x0014, size 0x4
};
