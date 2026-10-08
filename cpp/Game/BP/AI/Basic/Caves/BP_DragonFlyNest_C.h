// /Game/BP/AI/Basic/Caves/BP_DragonFlyNest.BP_DragonFlyNest_C
// Derives from: ABP_BatNest_C > ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DragonFlyNest_C : public ABP_BatNest_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NewVar_0;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_DragonFly_Character_C* NewVar_1;  // 0x04C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DragonFlyNest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnBat(const FVector& Location, FRotator Rotation, bool StartAggressive);  // parameters 0x19
};
