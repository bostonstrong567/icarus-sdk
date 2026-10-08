// /Game/BP/Systems/Disaster/BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C
// Derives from: UFLODInfluenceComponent > UActorComponent > UObject
// size 0x120, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_FLODInfluence_TreeToppler_C : public UFLODInfluenceComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FFLODInstanceID, TreeToppleInfo> PendingToppleInfo;  // 0x00D0, size 0x50

    UFUNCTION(BlueprintCallable) void AddPendingTreeTopple(FFLODInstanceID Instance, TreeToppleInfo ToppleInfo);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_BP_FLODInfluence_TreeToppler(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ToppleTree(ATreeBase* Tree, TreeToppleInfo ToppleInfo);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void UpdateActiveInfluences();
    UFUNCTION(BlueprintCallable) void UpdatePendingTopple();
};
