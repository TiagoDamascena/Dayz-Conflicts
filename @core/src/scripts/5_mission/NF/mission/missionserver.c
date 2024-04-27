modded class MissionServer extends MissionBase
{
	void MissionServer()
	{
		GetNFManager();
	}

	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
	{
		if (identity) {
			GetNFManager().OnPlayerConnect(player);
		}

		super.InvokeOnConnect(player, identity);
	}

	override void PlayerDisconnected(PlayerBase player, PlayerIdentity identity, string uid)
	{
		if (uid) {
			GetNFManager().OnPlayerDisconnect(player);
		}

		super.PlayerDisconnected(player, identity, uid);
	}
}