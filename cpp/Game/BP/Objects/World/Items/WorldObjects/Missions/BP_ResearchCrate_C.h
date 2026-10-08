// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_ResearchCrate.BP_ResearchCrate_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x750, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ResearchCrate_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Logbook;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Notebook;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DM_DEP_TackleBox;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0748, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ResearchCrate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnHighlighted(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
