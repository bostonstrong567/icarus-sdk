// /Game/BP/Tools/CheatFunctions/CheatSaveGame/SerializedActorWithInventories.SerializedActorWithInventories
// size 0x50

USTRUCT()
struct SerializedActorWithInventories
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorClass;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform ActorTrans;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SerializedInventory> Inventories;  // 0x0040, size 0x10
};
