// /Script/Icarus.KeybindData
// size 0x108, declared in Icarus/Source/Icarus/DataStructs/KeybindData.h

USTRUCT()
struct FKeybindData : public FIcarusTableRowBase
{
    UPROPERTY(Transient, BlueprintReadOnly) FName ActionName;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) bool bOverrideActionName;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere) FName ActionNameOverride;  // 0x0024, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindContextsRowHandle BindContext;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInputContext InputContext;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAxis;  // 0x0061, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EKeybindVisibility Visibility;  // 0x0062, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputActionKeyMapping KeyboardActionMapping;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAxisKeyMapping KeyboardAxisMapping;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputActionKeyMapping GamepadActionMapping;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAxisKeyMapping GamepadAxisMapping;  // 0x00E0, size 0x28
};
