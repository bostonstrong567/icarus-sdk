// /Game/ASS/VFX/Mission/DH_MissionSix/BP_MissionSix_OrbitalSequence.BP_MissionSix_OrbitalSequence_C
// Derives from: AActor > UObject
// size 0x29C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MissionSix_OrbitalSequence_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_01_TerraformExplosion;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_01_InitTerraform;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* LaserDirectionIndication;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_02_OrbitalLaserBeam;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_03_SatelliteExplosion;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_02_OrbitalStrike;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Phase_01_Charge;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OrbitalLaser_Position;  // 0x0268, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NS_Phase_01_LaserCharge_PlayLength;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NS_Phase_02_OrbitalStrike_PlayLength;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Satellite_Position;  // 0x027C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NS_Phase_02_LaserBeam_PlayLength;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* Audio_Component;  // 0x0290, size 0x8, named "Audio Component"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NS_Phase_01_Terraform_PlayLength;  // 0x0298, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_MissionSix_OrbitalSequence(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NS_Phase_01_LaserCharge();
    UFUNCTION(BlueprintCallable) void NS_Phase_02_Start();
    UFUNCTION(BlueprintCallable) void NS_Phase_03_Start();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
