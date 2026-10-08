// /Game/ASS/VFX/WAT/BP_waterfallBase.BP_waterfallBase_C
// Derives from: AActor > UObject
// size 0x27C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_waterfallBase_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_waterfallBaseFX;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Box_Size;  // 0x0228, size 0xC, named "Box Size"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spawn_Rate_Multiplier_Foam;  // 0x0234, size 0x4, named "Spawn Rate Multiplier Foam"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spawn_Rate_Multiplier_Mist;  // 0x0238, size 0x4, named "Spawn Rate Multiplier Mist"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_Mist_MAX;  // 0x023C, size 0x4, named "Sprite Size Mist MAX"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_Mist_MIN;  // 0x0240, size 0x4, named "Sprite Size Mist MIN"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_largeConst_Foam_MAX;  // 0x0244, size 0x4, named "Sprite Size largeConst Foam MAX"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_largeConst_Foam_MIN;  // 0x0248, size 0x4, named "Sprite Size largeConst Foam MIN"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_smallBurst_Foam_MAX;  // 0x024C, size 0x4, named "Sprite Size smallBurst Foam MAX"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Sprite_Size_smallBurst_Foam_MIN;  // 0x0250, size 0x4, named "Sprite Size smallBurst Foam MIN"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Opacity_Mult_Foam;  // 0x0254, size 0x4, named "Opacity Mult Foam"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foam_Size_Multiplier;  // 0x0258, size 0x4, named "Foam Size Multiplier"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mist_Size_Multiplier;  // 0x025C, size 0x4, named "Mist Size Multiplier"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity_Foam_MIN;  // 0x0260, size 0xC, named "Velocity Foam MIN"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity_Foam_MAX;  // 0x026C, size 0xC, named "Velocity Foam MAX"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Foam_Velocity_Multiplier;  // 0x0278, size 0x4, named "Foam Velocity Multiplier"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
