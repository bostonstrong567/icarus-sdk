// /Game/BP/World/MissionDecal/BP_Faction_Mission_HuntingClue_Footprints.BP_Faction_Mission_HuntingClue_Footprints_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x41D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Faction_Mission_HuntingClue_Footprints_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox5;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox4;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox3;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox2;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* CollisionBox1;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker5;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker4;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker3;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* GrassBlocker1;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow5;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow4;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow3;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow2;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> Block_Grass;  // 0x03B8, size 0x10, named "Block Grass"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<DecalSurface_Enum>> Surface;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Decal_Material;  // 0x03D8, size 0x10, named "Decal Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic_Material;  // 0x03E8, size 0x8, named "Dynamic Material"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UArrowComponent*> DecalArrow;  // 0x03F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstanceDynamic*> DynamicMaterials;  // 0x0400, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ActorPosition;  // 0x0410, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActorSet;  // 0x041C, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Faction_Mission_HuntingClue_Footprints(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HighlightDecals();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Set_Location();  // named "Set Location"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
