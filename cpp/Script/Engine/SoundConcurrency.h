// /Script/Engine.SoundConcurrency
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundConcurrency.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundConcurrency : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoundConcurrencySettings Concurrency;  // 0x0028, size 0x28
};
