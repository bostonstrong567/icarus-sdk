// /Script/Engine.SoundSubmixWithParentBase
// Derives from: USoundSubmixBase > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundSubmixWithParentBase : public USoundSubmixBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundSubmixBase* ParentSubmix;  // 0x0038, size 0x8
};
