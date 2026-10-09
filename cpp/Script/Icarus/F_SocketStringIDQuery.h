// /Script/Icarus.SocketStringIDQuery
// size 0x68, declared in Icarus/Source/Icarus/Traits/Behaviours/SlotableData.h

USTRUCT()
struct FSocketStringIDQuery
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SocketStringID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SlotVisualizerScale;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> SlotVisualizerMesh;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AmountOfPhysicsTime;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle SlotQuery;  // 0x004C, size 0x18
};
