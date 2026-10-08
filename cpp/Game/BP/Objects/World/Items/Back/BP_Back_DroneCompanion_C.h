// /Game/BP/Objects/World/Items/Back/BP_Back_DroneCompanion.BP_Back_DroneCompanion_C
// Derives from: ABP_Back_Item_Base_C > AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Back_DroneCompanion_C : public ABP_Back_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Back_DroneCompanion(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
};
