// /Game/BP/Objects/World/Items/WorldObjects/Missions/PRO_D/BP_Mining_Truck_Water.BP_Mining_Truck_Water_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x341, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mining_Truck_Water_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInitialised;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 WaterUnits;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReloaded;  // 0x0340, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Mining_Truck_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StoredUnitsUpdated();
};
