// /Game/BP/Utilities/WT/Atmospherics/BP_LocalAtmosphere.BP_LocalAtmosphere_C
// Derives from: AActor > UObject
// size 0x280, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LocalAtmosphere_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DMI_LocalFog;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LocalFogSize> FogSize;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BaseScale;  // 0x023C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BaseScaleSize;  // 0x0248, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BaseScaleFinal;  // 0x0254, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LocalFogHeight> FogHeight;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CustomSize;  // 0x0261, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LocalFogTOD> TimeOfDay;  // 0x0262, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LocalFogTypes> FogType;  // 0x0263, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LocalFogColor> FogColor;  // 0x0264, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Color;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CustomColor;  // 0x0270, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
