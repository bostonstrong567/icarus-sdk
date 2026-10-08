// /Game/BP/Hunting/BP_HuntingFootprints_Roat.BP_HuntingFootprints_Roat_C
// Derives from: ABP_HuntingFootprints_C > ABP_HuntingClue_C > AHuntingClue > AIcarusActor > AActor > UObject
// size 0x3B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HuntingFootprints_Roat_C : public ABP_HuntingFootprints_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Footstep2;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Footstep3;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Footstep4;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Footstep1;  // 0x03A8, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateStateVisuals();
};
