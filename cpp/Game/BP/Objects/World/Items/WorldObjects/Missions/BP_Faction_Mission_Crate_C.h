// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Faction_Mission_Crate.BP_Faction_Mission_Crate_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_Crate_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowMapIcon;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StatUID;  // 0x034C, size 0x4

    UFUNCTION(BlueprintCallable) void AddMapIcon();
    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_Crate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintCallable) void RemoveMapIcon();
    UFUNCTION(BlueprintCallable) void Setup(bool ShowMapIcon);  // parameters 0x1
};
