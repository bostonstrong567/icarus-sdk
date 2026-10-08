// /Script/Engine.SoundClass
// Derives from: UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundClass.h

UCLASS(EditInlineNew, Config=Engine)
class USoundClass : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoundClassProperties Properties;  // 0x0028, size 0x78
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USoundClass*> ChildClasses;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintReadOnly) USoundClass* ParentClass;  // 0x00C0, size 0x8
};
