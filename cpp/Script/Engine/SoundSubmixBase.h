// /Script/Engine.SoundSubmixBase
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundSubmixBase : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<USoundSubmixBase*> ChildSubmixes;  // 0x0028, size 0x10
};
