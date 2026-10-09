// /Game/BP/PlayerMap/GlobalEquippableStats.GlobalEquippableStats
// size 0x38

USTRUCT()
struct GlobalEquippableStats
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEquippableRowHandle EquippableRowHandle;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UEquippableModifier*> EquippableInstances;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> ActorsAlreadyEffected;  // 0x0028, size 0x10
};
