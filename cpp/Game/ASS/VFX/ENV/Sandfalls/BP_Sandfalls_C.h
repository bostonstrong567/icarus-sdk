// /Game/ASS/VFX/ENV/Sandfalls/BP_Sandfalls.BP_Sandfalls_C
// Derives from: AActor > UObject
// size 0x2A1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Sandfalls_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* SandfallAudio;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Niagara;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Curve;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Height;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> MeshTypes;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MeshType;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Speed;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Density;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverwriteMaterial;  // 0x0284, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* Material;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Particle_Spawn_Scale;  // 0x0290, size 0xC, named "Particle Spawn Scale"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Particle_Spawn_Rate;  // 0x029C, size 0x4, named "Particle Spawn Rate"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AddParticles;  // 0x02A0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Sandfalls(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NewFunction_0();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
