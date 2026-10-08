// /Game/BP/World/PersistentBlockers/BP_PersistentBlockerSpawner.BP_PersistentBlockerSpawner_C
// Derives from: APersistentBlockerSpawner > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PersistentBlockerSpawner_C : public APersistentBlockerSpawner
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool EditorVisible;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UChildActorComponent* ChildActor;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_PersistentBlockerSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
