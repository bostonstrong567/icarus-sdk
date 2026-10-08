// /Game/BP/Utilities/WT/WT_FrozenLake.WT_FrozenLake_C
// Derives from: AActor > UObject
// size 0x244, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_FrozenLake_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plane;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<E_FrozenLakeType> Type;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInterface*> Material_Overrides;  // 0x0230, size 0x10, named "Material Overrides"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID;  // 0x0240, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
