// /Game/BP/Tools/CheatFunctions/Widgets/BiomeRow.BiomeRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UBiomeRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BiomeName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x0288, size 0x18

    UFUNCTION() void ExecuteUbergraph_BiomeRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBiome(FBiomesRowHandle New_Biome);  // parameters 0x18
};
