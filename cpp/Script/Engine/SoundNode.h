// /Script/Engine.SoundNode
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNode.h

UCLASS(Abstract, EditInlineNew)
class USoundNode : public UObject
{
public:
    UPROPERTY() TArray<USoundNode*> ChildNodes;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FRandomStream RandomStream;  // 0x0038
    bool bIsRetainingAudio;  // 0x0040

    // Virtual functions that start here:
    //   CreateStartingConnectors, GetAllNodes, GetDuration, GetMaxChildNodes, GetMaxDistance
    //   GetMinChildNodes, GetNumSounds, HasConcatenatorNode, HasDelayNode, InsertChildNode
    //   IsPlayWhenSilent, NotifyWaveInstanceFinished, OverrideLoadingBehaviorOnChildWaves, ParseNodes
    //   PrimeChildWavePlayers, ReleaseRetainerOnChildWavePlayers, RemoveChildNode
    //   RemoveSoundWaveOnChildWavePlayers, RetainChildWavePlayers, SupportsSubtitles
};
