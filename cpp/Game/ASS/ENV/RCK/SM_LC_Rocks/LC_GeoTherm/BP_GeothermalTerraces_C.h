// /Game/ASS/ENV/RCK/SM_LC_Rocks/LC_GeoTherm/BP_GeothermalTerraces.BP_GeothermalTerraces_C
// Derives from: AWaterBody > AIcarusActor > AActor > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GeothermalTerraces_C : public AWaterBody
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SulfurGas_Up;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_GeoSteam;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* WaterPlane;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> Rock_Meshes;  // 0x0378, size 0x10, named "Rock Meshes"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Type;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> Water_Meshes;  // 0x0390, size 0x10, named "Water Meshes"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Spawn_Steam;  // 0x03A0, size 0x1, named "Spawn Steam"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresEnum Atmosphere;  // 0x03A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Steam_Radius;  // 0x03B8, size 0x4, named "Steam Radius"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Steam_Sprite_Size;  // 0x03BC, size 0x4, named "Steam Sprite Size"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spawn_Amount;  // 0x03C0, size 0x4, named "Spawn Amount"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Particle_Offset_Position;  // 0x03C4, size 0xC, named "Particle Offset Position"

    UFUNCTION() void ExecuteUbergraph_BP_GeothermalTerraces(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void ToggleSulfurGas(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
