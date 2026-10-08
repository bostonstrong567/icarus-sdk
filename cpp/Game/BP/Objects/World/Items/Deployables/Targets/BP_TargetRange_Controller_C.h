// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Controller.BP_TargetRange_Controller_C
// Derives from: ATargetRangeController > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Controller_C : public ATargetRangeController, public ICriticalHitReceiver
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0358, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
};
