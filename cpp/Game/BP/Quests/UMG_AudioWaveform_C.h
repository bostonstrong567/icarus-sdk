// /Game/BP/Quests/UMG_AudioWaveform.UMG_AudioWaveform_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AudioWaveform_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WaveformVisualizer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_4;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_5;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_6;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_7;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_8;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_9;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AudioBar1_10;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BaseImage;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PlayIcon;  // 0x02D0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AudioWaveform(int32 EntryPoint);  // parameters 0x4
};
