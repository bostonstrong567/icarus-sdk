// /Game/BP/World/MissionDecal/BP_Decal_Deployable_BaseWorldObject.BP_Decal_Deployable_BaseWorldObject_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3F6, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Decal_Deployable_BaseWorldObject_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass;  // 0x0390, size 0x10, named "Block Grass"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material;  // 0x03B0, size 0x10, named "Decal Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material;  // 0x03C0, size 0x8, named "Dynamic Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition;  // 0x03E8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet;  // 0x03F4, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool DestoyedByWeather;  // 0x03F5, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Decal_Deployable_BaseWorldObject(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleWeatherEvent(int32 ModifierLevel);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Location();  // named "Set Location"
    UFUNCTION(BlueprintCallable) void SetDestroyedByWeather(bool Destroyed);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
