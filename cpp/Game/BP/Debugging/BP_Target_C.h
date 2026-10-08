// /Game/BP/Debugging/BP_Target.BP_Target_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Target_C : public ABP_DeployableBase_C, public IICriticalHitInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* TargetPanel;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* Text_Lane;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* Text_Score;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* TargetLight;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* BullseyeSphere;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* TargetSphere;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistanceRequirement;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Lane;  // 0x0770, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HighScore;  // 0x0780, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceShot;  // 0x0784, size 0x4

    UFUNCTION(BlueprintCallable) void _500mShotCheck();  // named "500mShotCheck"
    UFUNCTION() void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION() void BndEvt__TargetPanel_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Target(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GatherIntersections(AActor* Projectile, bool Debug, bool& Return, TArray<FCHCollisionStruct>& Intersections);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GetCHBounds(bool& Return, UBoxComponent*& Box);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetTargetHealth(bool& Return, float& Health);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PredictMovement(float Time, bool& Return);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void ResetPrediction(bool& Return);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateLightPosition(FVector Position);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateScoreText(FString Name, float Distance);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
