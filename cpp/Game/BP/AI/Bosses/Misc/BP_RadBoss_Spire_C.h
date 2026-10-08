// /Game/BP/AI/Bosses/Misc/BP_RadBoss_Spire.BP_RadBoss_Spire_C
// Derives from: ARadBossSpire > AActor > UObject
// size 0x2B4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RadBoss_Spire_C : public ARadBossSpire
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RockC_RootTransform;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RockB_RootTransform;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RockA_RootTransform;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Preview_Entry;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Preview_C;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Preview_B;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_Preview_A;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Radboss_Spire_StaticMeshComponent0;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockC_Visualiser;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* ArrowC;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockB_Visualiser;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* ArrowB;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockA_Visualiser;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* ArrowA;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EntryPoint;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowVisualisers;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FieldOfViewAngle_A;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FieldOfViewAngle_B;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FieldOfViewAngle_C;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BufferZone;  // 0x02B0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetBestIndexForTargetLocation(AActor* TargetActor);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetDirectionToTargetFromIndex(AActor* TargetActor, const int32& CurrentIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsTargetWithinIndexFieldOfView(AActor* TargetActor, const int32& CurrentIndex, bool bIncludeBuffer);  // parameters 0xE
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
