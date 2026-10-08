// /Script/Icarus.ComponentPicker
// size 0x10, declared in Icarus/Source/Icarus/Utility/ComponentPicker.h

USTRUCT()
struct FComponentPicker
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ComponentName;  // 0x0000, size 0x8
    UPROPERTY(Transient, Instanced) TWeakObjectPtr<USceneComponent> CachedComponent;  // 0x0008, size 0x8
};
