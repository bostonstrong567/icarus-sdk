// /Game/BP/Objects/World/Items/Deployables/Missions/BP_TriangulationBeacon.BP_TriangulationBeacon_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x746, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TriangulationBeacon_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator DefaultRotation;  // 0x0738, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool Active;  // 0x0744, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowingIcon;  // 0x0745, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_TriangulationBeacon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Beacon_Status(bool bActive);  // parameters 0x1, named "Set Beacon Status"
};
