// /Game/BP/Objects/World/Items/WorldObjects/Missions/ELY_SQ/BP_SQ_MedicCot.BP_SQ_MedicCot_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SQ_MedicCot_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDelivered Delivered;  // 0x0320, size 0x10

    UFUNCTION(BlueprintCallable) void Delivered__DelegateSignature();
};
