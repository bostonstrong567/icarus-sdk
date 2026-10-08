// /Game/BP/World/MissionDecal/BP_Decal_Deployable_Base.BP_Decal_Deployable_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x810, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Deployable_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3;  // 0x0758, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2;  // 0x0788, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x0790, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass;  // 0x0798, size 0x10, named "Block Grass"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface;  // 0x07A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material;  // 0x07B8, size 0x10, named "Decal Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material;  // 0x07C8, size 0x8, named "Dynamic Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials;  // 0x07E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition;  // 0x07F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet;  // 0x07FC, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool DestoyedByWeather;  // 0x07FD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDecalComponent*> AddedDecals;  // 0x0800, size 0x10

    UFUNCTION(BlueprintCallable) void CreateOverflowBag(bool IncludeSelf, EIcarusActorDestroyReason DestroyReason);  // parameters 0x2
    UFUNCTION() void ExecuteUbergraph_BP_Decal_Deployable_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleWeatherEvent(int32 ModifierLevel);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Location();  // named "Set Location"
    UFUNCTION(BlueprintCallable) void SetDestroyedByWeather(bool Destroyed);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
